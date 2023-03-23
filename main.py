import socket

print("\nIf you wanna exit the loop enter 'exit' in 'port'!\n")

socket.setdefaulttimeout(4)

def main():
    while True:
        try:
            target = input("Enter your IP address or skip to port and enter 'exit': ")
            s = socket.socket()
            port = input("Enter port or 'exit': ")

            try:
                port = int(port)
                print(f"\nPort: {port}\n")

            except:
                if "exit" in port and target:
                    print(f"Exiting...\n")
                    break

                else:
                    print(f"Invalid port: {port}\n"
                        f"Please enter a digits!\n")
                    continue

            print(f"\nConnecting...\n")

            s.connect((target, port))
            s.send("Hello!\r\n".encode("utf-8"))
            data = s.recv(1024).decode("utf-8")

            print(f"Data:\n"
                f"{data}\n")

        except Exception as error:
            print(f"Error:\n"
                f"{error}\n")
            break

if __name__ == "__main__":
    main()
