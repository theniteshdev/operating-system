# 🚀 **Advanced Operator Challenges (C++)**

---

## **Challenge 1: Compound Billing System (Arithmetic + Precedence)**

A coffee shop sells three items:

- Coffee: ₹50
- Sandwich: ₹80
- Cake: ₹120

The user enters how many of each item they bought.

### Requirements:

1. Calculate subtotal.
2. Apply:
   - 5% service charge
   - 18% GST (on subtotal + service charge)

3. If total bill exceeds ₹500, apply ₹50 discount.
4. Display final payable amount.

👉 Focus on operator precedence and correct formula building.

---

## **Challenge 2: Wallet Tracker (Assignment Operators)**

Create a simple wallet system.

User starts with ₹1000.

Then:

1. Add salary using `+=`
2. Subtract expenses using `-=`
3. Apply a 2% monthly interest using `*=`
4. Divide wallet amount into 4 weekly budgets using `/=`

Display wallet value after each step.

👉 Use all compound assignment operators carefully.

---

## **Challenge 3: Access Control System (Relational + Logical Operators)**

A website gives access to premium content if:

- Age ≥ 18
- AND (user is premium member OR has referral code)
- AND account is not banned

Take inputs:

- age
- isPremium (true/false)
- hasReferral (true/false)
- isBanned (true/false)

Print whether access is **GRANTED** or **DENIED**.

👉 Think about logical grouping using `&&`, `||`, `!`.

---

## **Challenge 4: Binary Permission Flags (Bitwise Operators – Real System Style)**

You’re building a file permission system:

| Permission | Value |
| ---------- | ----- |
| Read       | 1     |
| Write      | 2     |
| Execute    | 4     |

User enters a number (0–7) representing combined permissions.

### Tasks:

1. Check if user has Read permission.
2. Check if user has Write permission.
3. Check if user has Execute permission.
4. Allow adding Execute permission using `|=`
5. Allow removing Write permission using `&= ~`

👉 This is how real OS permission systems work 👀

---

## **Challenge 5: Smart Energy Monitor (Ternary + Logical Operators)**

A smart meter calculates electricity usage.

User inputs:

- Units consumed
- Is user senior citizen (true/false)

Rules:

- If units ≤ 100 → ₹5 per unit
- If units > 100 → ₹8 per unit
- If senior citizen → 10% discount

Use:

- Ternary operator `? :`
- Logical operators
- Arithmetic operators

Display final bill.
