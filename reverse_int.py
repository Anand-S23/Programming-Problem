class Solution:
    def reverse(self, x: int) -> int:
        x = str(x)
        
        if x[0] == "-":
            x = "-" + (x[1:])[::-1]
            return int(x) if int(x) >= (-2) ** 31 else 0
        
        return int(x[::-1]) if int(x[::-1]) <= 2 ** 31 else 0
