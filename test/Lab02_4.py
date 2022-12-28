

def main():    
    n = int(input())
    result = int((n * (n + 1) / 2) + ((n * (n + 1) / 2)*(2 * n + 1) / 3))
    
    print(result)


if __name__=="__main__":
    main()