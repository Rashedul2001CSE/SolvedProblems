class Solution:
    def robotSim(self, commands: List[int], obstacles: List[List[int]]) -> int:
        dirValue = [[0, 1], [1, 0], [0, -1], [-1, 0]]
        x, y = 0, 0
        obstacles = {tuple(obs) for obs in obstacles}
        direction = 0
        result = 0
        for command in commands:
            if command == -1:
                direction = (direction + 1) % 4
            elif command == -2:
                direction = (direction - 1) % 4
            else:
                xValue, yValue = dirValue[direction]
                for _ in range(command):
                    if (x + xValue, y + yValue) in obstacles:
                        break
                    x, y = x + xValue, y + yValue
            result = max(result, x**2 + y**2)

        return result
