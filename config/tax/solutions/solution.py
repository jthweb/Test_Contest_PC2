def detect_tax_evasion(test_cases):
    results = []
    for reported, actual in test_cases:
        if reported < 0.8 * actual:
            results.append("Evasion")
        else:
            results.append("No Evasion")
    return results

# Read input
T = int(input())
test_cases = [tuple(map(int, input().split())) for _ in range(T)]

# Get results
results = detect_tax_evasion(test_cases)

# Print results
for result in results:
    print(result)
