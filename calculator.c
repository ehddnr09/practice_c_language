#include <stdio.h>
// 간단한 계산기 프로그램의 입출력 예제를 제시해 드리겠습니다.

// ### 간단한 계산기 프로그램 입출력 예제

// **시작 화면:**
// ```
// 간단한 계산기 프로그램입니다.
// 사용 가능한 연산: +, -, *, /
// 종료하려면 'q'를 입력하세요.
// ```

// **더하기 예제:**
// ```
// 첫 번째 숫자를 입력하세요: 5
// 연산자를 입력하세요 (+, -, *, /): +
// 두 번째 숫자를 입력하세요: 3
// 계산 결과: 5 + 3 = 8
// ```

// **빼기 예제:**
// ```
// 첫 번째 숫자를 입력하세요: 10
// 연산자를 입력하세요 (+, -, *, /): -
// 두 번째 숫자를 입력하세요: 4
// 계산 결과: 10 - 4 = 6
// ```

// **곱하기 예제:**
// ```
// 첫 번째 숫자를 입력하세요: 7
// 연산자를 입력하세요 (+, -, *, /): *
// 두 번째 숫자를 입력하세요: 8
// 계산 결과: 7 * 8 = 56
// ```

// **나누기 예제:**
// ```
// 첫 번째 숫자를 입력하세요: 20
// 연산자를 입력하세요 (+, -, *, /): /
// 두 번째 숫자를 입력하세요: 4
// 계산 결과: 20 / 4 = 5
// ```

// **0으로 나누기 오류 예제:**
// ```
// 첫 번째 숫자를 입력하세요: 10
// 연산자를 입력하세요 (+, -, *, /): /
// 두 번째 숫자를 입력하세요: 0
// 오류: 0으로 나눌 수 없습니다.
// ```

// **잘못된 연산자 입력 예제:**
// ```
// 첫 번째 숫자를 입력하세요: 5
// 연산자를 입력하세요 (+, -, *, /): %
// 잘못된 연산자입니다. +, -, *, / 중 하나를 입력하세요.
// ```

// **잘못된 숫자 입력 예제:**
// ```
// 첫 번째 숫자를 입력하세요: abc
// 잘못된 입력입니다. 숫자를 입력하세요.
// ```

// **종료 예제:**
// ```
// 첫 번째 숫자를 입력하세요: q
// 계산기 프로그램을 종료합니다. 감사합니다.
// ```

// 이런 입출력 예제가 있으면 사용자 인터페이스 설계와 예외 처리 등을 구현하는 데 도움이 될 것입니다.

int intTypeCheck(int scanResult)
{
  if (scanResult != 1)
  {
    printf("%d, 숫자가 아닌 문자를 입력하셨습니다.\n", scanResult);
    return 1;
  }
  return 0;
}

int main()
{
  char operation;
  int fnum, snum;
  int scanResult;
  printf("간단한 계산기 프로그램입니다.\n");
  printf("  +, -, /, * 중에 무슨 계산을 하겠습니까?\n");
  scanf("%c", &operation);
  if (operation != '+' && operation != '-' && operation != '/' && operation != '*')
  {
    printf("잘못선택하셨습니다.\n");
    return 0;
  }
  else
  {
    printf("%c를 선택하셨습니다.\n", operation);
  }

  printf("첫번째 숫자를 입력하세요.\n");
  scanResult = scanf("%d", &fnum);
  intTypeCheck(scanResult);

  printf("두번째 숫자를 입력하세요.\n");
  scanResult = scanf("%d", &snum);
  intTypeCheck(scanResult);

  if (operation == '+')
  {
    printf("%d + %d = %d\n", fnum, snum, fnum + snum);
  }
  else if (operation == '-')
  {
    printf("%d - %d = %d\n", fnum, snum, fnum - snum);
  }
  else if (operation == '/')
  {
    printf("%d / %d = %d\n", fnum, snum, fnum / snum);
  }
  else
  {
    printf("%d x %d = %d\n", fnum, snum, fnum * snum);
  }

  return 0;
}
