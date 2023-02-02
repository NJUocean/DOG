int a = 0;
int e() {
  if (a) {
    int f;
    return 0;
    int *g = &f;
  } else {
    return 1;
  }
}
void main() {
  for (; a <= 3; a++)
    e();
}