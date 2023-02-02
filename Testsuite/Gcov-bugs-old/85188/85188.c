int *c() {
  int b = 1;
f:
  if (b) {
    short g[1];
    for (; 0;) {
      goto f;
      return 0;
    }
    return 0;
  } else
    ;
  return 0;
}
void main() { c(); }