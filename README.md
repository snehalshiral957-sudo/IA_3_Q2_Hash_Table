# IA_3_Q2_Hash_Table

## Project Overview
A C++ hash table project featuring collision handling, collision counting, searching, full-table checking, and a menu-driven interface.

## Implementation Details
- Source file: `hash_table.cpp`
- Table size: `23`
- Hash function: `h(key) = key % 23`
- Collision resolution: Linear probing

**Important:** Confirm the table size, hash function, and probing method against the final `hash_table.cpp`. Edit these values if your code differs.

## Features
1. Store keys in a hash table.
2. Resolve collisions using linear probing.
3. Count collisions.
4. Check whether the table is full before insertion.
5. Search for a key.
6. Select operations through a menu.

## How to Compile and Run (Windows PowerShell)
Open PowerShell in this folder and execute:

```powershell
g++ hash_table.cpp -o hash_table.exe
.\hash_table.exe
```

A C++ compiler such as MinGW-w64 must be installed and available in PATH.

## Sample Manual Trace
For table size 23 and `h(key) = key % 23`:
- `h(10) = 10`; key 10 can be stored at index 10.
- `h(79) = 10`; if index 10 is occupied, linear probing checks index 11.
- If index 11 is empty, key 79 is stored there.
- `h(100) = 8`; the recorded test case searches for 100 and reports it as not found.

## Git Development History
| Commit | Development stage |
|---|---|
| `49a6a00` | Add personalized hash table project |
| `5834b24` | Add hash table full condition checking |
| `1246286` | Add collision counting |
| `e301088` | Add search functionality |
| `ca92d16` | Add menu driven functionality |
| `f48b385` | Improve output and complete final testing |

View the history with:

```powershell
git log --oneline
git log --oneline --graph --decorate --all
```

Export it with:

```powershell
git log --oneline > git_log.txt
```

## Project Files
- `hash_table.cpp` — C++ source code.
- `hash_table.exe` — compiled executable, if included.
- `Debugging_Log.docx` — development checks and corrections.
- `Trace_Match_Report.docx` — manual trace and output comparison.
- `git_log.txt` — exported Git history.
- `Evidence/` — program output and Git screenshots.

## Testing
Test a key with an empty calculated slot, a colliding key, a key that exists, a key that does not exist, and the full-table condition. Add actual terminal screenshots in the `Evidence` folder.

## Author
Add your name, roll number, class, and academic year here.
