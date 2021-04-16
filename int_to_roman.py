class Solution:
    def intToRoman(self, num: int) -> str:
        
        symbols_values = {
            1: [1],
            2: [1, 1],
            3: [1, 1, 1],
            4: [1, 5],
            5: [5],
            6: [5, 1],
            7: [5, 1, 1],
            8: [5, 1, 1, 1],
            9: [1, 10]
        }
        
        symbols = {
            1: 'I',
            5: 'V',
            10: 'X',
            50: 'L',
            100: 'C',
            500: 'D',
            1000: 'M'
        }
        
        place = 1
        result = ''
        
        for i in range(len(str(num))):
            current = num % 10
            
            if current == 0: 
                num //= 10
                place *= 10
                continue
                
            value = symbols_values[current]
            current_string = ''
            
            for i in range(len(value)):
                current_string += (symbols[value[i] * place])
            
            result = current_string + result
            num //= 10
            place *= 10
        
        return result
            
