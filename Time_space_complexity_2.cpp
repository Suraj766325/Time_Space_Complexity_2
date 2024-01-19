// 1) Calculate the time complexity for the following code snippet.
for(int i = 0; i < n; i++) {
for(int j = 0; j * j < n; j++) {
cout << “PhysicsWallah ”;
}
}
TIME COMPLEXITY = 0(n(sqrt(n)))




// 2) Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 0; i < n; i++) {
for(int j = 1; j < n; j *= 2) {
c++;
}
}
TIME COMPLEXITY = 0(nlog(n))




// 3) Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 0; i < n; i++) {
for(int j = 1; j * j < n; j *= 2) {
c++;
}
}
TIME COMPLEXITY = 0(nlog(n))




// 4) Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = n; i > 0; i /= 2) {
for(int j = 0; j < i; j ++) {
c++;
}
}
TIME COMPLEXITY = 0(n)




// 5) Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 1; i < n; i*=2) {
for(int j = n; j > i; j--) {
c++;
}
}
TIME COMPLEXITY = 0(nlog(n))