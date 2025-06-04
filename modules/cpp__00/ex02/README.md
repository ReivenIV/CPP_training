# Account Class - GlobalBanksters United

## Overview

The `Account` class is a blueprint for creating and managing individual bank accounts. Each account object represents a separate user account, with its own balance and transaction history. The class also keeps track of global statistics across all accounts.

---

## Instance Variables (Per Account)

These variables are unique to each account object:

- `int _accountIndex;`  
  The unique index (ID) of the account.

- `int _amount;`  
  The current balance of this account.

- `int _nbDeposits;`  
  The number of deposits made to this account.

- `int _nbWithdrawals;`  
  The number of withdrawals made from this account.

Each time you create a new `Account` object, it will have its own values for these variables.

---

## Static Variables (Global Totals)

These variables are shared across all account objects and keep track of global statistics:

- `static int _nbAccounts;`  
  The total number of accounts created.

- `static int _totalAmount;`  
  The total amount of money across all accounts.

- `static int _totalNbDeposits;`  
  The total number of deposits made to all accounts.

- `static int _totalNbWithdrawals;`  
  The total number of withdrawals made from all accounts.

Whenever any account makes a deposit or withdrawal, these static variables are updated to reflect the new global totals.

---

## Main Methods

- `Account(int initial_deposit);`  
  Constructor to create a new account with an initial deposit.

- `~Account(void);`  
  Destructor, called when an account is closed.

- `void makeDeposit(int deposit);`  
  Adds money to the account and updates both the account and global totals.

- `bool makeWithdrawal(int withdrawal);`  
  Withdraws money from the account if possible and updates both the account and global totals.

- `int checkAmount(void) const;`  
  Returns the current balance of the account.

- `void displayStatus(void) const;`  
  Displays the current status of the account.

- `static void displayAccountsInfos(void);`  
  Displays global statistics for all accounts.

---

## How It Works

- Each time you create an `Account` object, it represents a new user account.
- Each account tracks its own balance and transaction history.
- The class also keeps track of global statistics using static variables.
- All output is printed to the terminal, including timestamps for each operation.

---

## Example

```cpp
Account a1(100); // Creates account 1 with 100$
Account a2(200); // Creates account 2 with 200$

a1.makeDeposit(50);      // a1 balance: 150$, global total: 350$
a2.makeWithdrawal(30);   // a2 balance: 170$, global total: 320$
```

---

## Summary

- **Instance variables**: Unique to each account (per user).
- **Static variables**: Shared across all accounts (global totals).
- The class provides methods to manage accounts and track both individual and global statistics.
