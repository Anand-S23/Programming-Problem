class Solution:
    def romanToInt(self, s: str) -> int:
        solution_list = []
        
        symbols = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        
        for i in s:
            solution_list.append(symbols[i])
        
        result = 0
        for i, v in enumerate(solution_list):
            if i == 0:
                result += v
            else:
                result += v if solution_list[i - 1] >= v else (v - 2 * solution_list[i - 1])
        
        return result
        
