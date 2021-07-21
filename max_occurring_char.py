def maximumOccurringCharacter(text):
    alpha_dict = {}
    lower_string = text.lower()

    max = 0 
    for i in lower_string:
        if i in alpha_dict:
            alpha_dict[i] += 1
        else: 
            alpha_dict[i] = 1

        if alpha_dict[i] > max:
            max = alpha_dict[i]

    result = ''
    for index, val in enumerate(lower_string):
        if alpha_dict[val] == max:
            result = text[index]
            break

    return resul
