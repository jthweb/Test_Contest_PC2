def count_unique_colors(colors):
    return len(set(colors))

# Input reading
N = int(input())
colors = list(map(int, input().split()))
print(count_unique_colors(colors))
exit()