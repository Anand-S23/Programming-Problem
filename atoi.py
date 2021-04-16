class Solution:
    def myAtoi(self, s: str) -> int:
        s_list = s.strip().split(" ")
        
        result = ''
        
        symbol_sign = False
        symbol_period = False
        number = False
        for i in s_list[0]:
            if (i == '-' or i == '+') and not symbol_sign and not number:
                result += i
                symbol_sign = True
            elif  i == '.' and not symbol_period:
                result += i
                symbol_period = True
            elif i.isdigit():
                result += i
                number = True
            else:
                break
        
        try:
            int_val = int(float(result))
        except:
            int_val = 0
        
        int_val = int_val if int_val >= (-2) ** 31 else (-2) ** 31
        int_val = int_val if int_val <= 2 ** 31 - 1 else 2 ** 31 - 1
           
        return int_val
