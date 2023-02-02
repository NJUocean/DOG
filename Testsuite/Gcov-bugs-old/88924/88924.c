int ca[6] = {244, -245, 244, -246, 245, -246};

void main()
{
  for (int i = 0; i < 6; ++i) {
    int flag = i % 2 == 1 && ca[i] != (-2 * i - 1955) >> 3;
    if (flag) {
      ;
    } else if (i % 2 == 0 && ca[i] != (1955 + 2 * i) >> 3) {
      ;
    }
  }

  for (int i = 0; i < 6; ++i) {
    if (i % 2 == 1 && ca[i] != (-2 * i - 1955) >> 3) {
      ;
    } else if (i % 2 == 0 && ca[i] != (1955 + 2 * i) >> 3) {
      ;
    }
  }
}
