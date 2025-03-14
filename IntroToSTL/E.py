import random

def generate_testcases(filename="input.txt"):
    with open(filename, "w") as file:
        # Generate a random number of test cases within the constraint
        t = random.randint(1, 100)
        file.write(f"{t}\n")

        for _ in range(t):
            # Generate random values for n, a, b within their constraints
            n = random.randint(0, 100)
            a = random.randint(0, n)  # Ensure a <= n
            b = random.randint(0, 100)

            file.write(f"{n} {a} {b}\n")

            # Generate array A with random integers from 1 to n (if n > 0)
            if a > 0:
                array_a = [random.randint(1, max(1, n)) for _ in range(a)]
                file.write(" ".join(map(str, array_a)) + "\n")
            else:
                file.write("\n")

            # Generate array B with random integers from -100 to 100
            if b > 0:
                array_b = [random.randint(-100, 100) for _ in range(b)]
                file.write(" ".join(map(str, array_b)) + "\n")
            else:
                file.write("\n")

if __name__ == "__main__":
    generate_testcases()
