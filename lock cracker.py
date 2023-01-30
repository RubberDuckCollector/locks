def lock():

    lock = "225"
    
    for i in range(0, 10):
        for j in range(0, 10):
            for k in range(0, 10):

                i2 = str(i)
                j2 = str(j)
                k2 = str(k)

                output = i2 + j2 + k2

                print(output)

                if output == lock:
                    print(f"lock combination found: {output}")
                    return

    print("combination not found")

def main():
    lock()

if __name__ == '__main__':
    main()
