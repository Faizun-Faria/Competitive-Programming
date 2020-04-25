### STRUCT
```
// name, id, addr

#define pii pair <int, int>

// v[0] = "faria", 50, "Mohakhali"
// v[1] = "maria", 20, "Gulshan"
// v[2] = "laria", 30, "Mohammadpur"

// person = custom variable type
// cmp() = custom method
struct person {
    string name, id, addr;
};
struct cmp() {
    bool operator() (const person& p1, const person& p2) {
        if (p1.id != p2.id) p1.id < p2.id;
        return p1.id < p2.id;
    }
};
// main function

person p[3];
for (int i = 0; i < 3; i++) {
   cin >> name >> id >> addr, p[i] = {name, id, addr};
}
sort(p, p+3);
for (int i = 0; i < 3; i++) {
   cout << p[i].name << " " << p[i].id << " " << p[i].addr << endl;
}
```
