def maxTickets(tickets):
    tickets.sort()

    arr = []
    current_arr = []
    current_arr.append(tickets[0])
    for index, val in enumerate(tickets):
        if index != len(tickets) - 1:
            dv = abs(val - tickets[index + 1] )
            if dv == 0 or dv == 1:
                current_arr.append(tickets[index + 1])
            else:
                arr.append(current_arr)
                current_arr = []
                current_arr.append(tickets[index + 1])

    max = 0
    for i in arr:
        if len(i) > max:
            max = len(i)

    return max
