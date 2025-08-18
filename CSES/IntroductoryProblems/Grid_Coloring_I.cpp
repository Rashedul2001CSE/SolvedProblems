#include<bits/stdc++.h>
using namespace std;

int main(){
	int h,w;
	cin >> h >> w;
	vector<string> grid(h);
	for(auto &row : grid) cin >> row;
	for(int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			set<char> s;
			if (i != 0){
				s.insert(grid[i-1][j]);
			}
			if (j != 0){
				s.insert(grid[i][j-1]);
			}
			s.insert(grid[i][j]);
			for ( char c = 'A'; c <= 'D'; c++){
				if (!s.count(c)){
					grid[i][j] = c;
				}
			}
		}
	}
	for(auto str : grid) cout << str << "\n";
	
	
	return 0;
}