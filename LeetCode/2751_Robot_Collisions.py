class Solution:
    def survivedRobotsHealths(
        self, positions: List[int], healths: List[int], directions: str
    ) -> List[int]:
        mapIndex = {pos: i for i, pos in enumerate(positions)}
        stack = []
        for pos in sorted(positions):
            index = mapIndex[pos]
            if directions[index] == "R":
                stack.append(index)
            else:
                while stack and healths[index]:
                    top = stack.pop()

                    if healths[index] > healths[top]:
                        healths[top] = 0
                        healths[index] -= 1
                    elif healths[index] < healths[top]:
                        healths[top] -= 1
                        healths[index] = 0
                        stack.append(top)
                    else:
                        healths[top] = healths[index] = 0
        return [health for health in healths if health]
