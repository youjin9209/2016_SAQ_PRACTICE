package codeGround;

import java.util.Arrays;
import java.util.Scanner;
import java.io.FileInputStream;

class easyEx03 {
	
	public static void main(String args[]) throws Exception	{
		/* 아래 메소드 호출은 앞으로 표준입력(키보드) 대신 input.txt 파일로 부터 읽어오겠다는 의미의 코드입니다.
		   만약 본인의 PC 에서 테스트 할 때는, 입력값을 input.txt에 저장한 후 이 코드를 첫 부분에 사용하면,
		   표준입력 대신 input.txt 파일로 부터 입력값을 읽어 올 수 있습니다.
		   또한, 본인 PC에서 아래 메소드를 사용하지 않고 표준입력을 사용하여 테스트하셔도 무방합니다.
		   단, Codeground 시스템에서 "제출하기" 할 때에는 반드시 이 메소드를 지우거나 주석(//) 처리 하셔야 합니다. */
		//Scanner sc = new Scanner(new FileInputStream("input.txt"));
        
		//Scanner sc = new Scanner(System.in);
		Scanner sc = new Scanner(new FileInputStream("/Users/scarlett/Documents/input/sampleinput3.txt"));
		
		int TC;
		int test_case;
		// result ^= num;
		TC = sc.nextInt();    
		for(test_case = 1; test_case <= TC; test_case++) {
			// 이 부분에서 알고리즘 프로그램을 작성하십시오.
			int XOR = 0;
			int n = sc.nextInt();
			int number[] = new int[n];
			for(int i = 0; i < n; i++) {
				number[i] = sc.nextInt();
				XOR ^= number[i];
			}
            // 이 부분에서 정답을 출력하십시오.
			System.out.println("Case #" + test_case);
            System.out.println(XOR);
		}
	}
}
