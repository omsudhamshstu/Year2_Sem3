# . i) Write a program to calculate compound interest when principal, rate and number of periods are given.

def calculate_compound_interest(principal, rate, periods):
    amount = principal * (1 + rate / 100) ** periods
    return amount - principal  # Compound Interest

principal = 1000
rate = 5
periods = 2

ci = calculate_compound_interest(principal, rate, periods)
print(f"Compound Interest: {ci:.2f}")