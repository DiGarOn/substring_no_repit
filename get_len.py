def get_len(str):
    res = 0
    ma = 0
    sec = str[0]

    for i in range(1, len(str)):
        fir = sec
        sec = str[i]
        if(fir != sec):
            res += 1
        else:
            ma = max(res, ma)
            res = 1

    return max(res, ma)


def main():
    str = input()
    print(get_len(str))

main()