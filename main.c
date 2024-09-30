#include <stdio.h>
#include <math.h>

int main() {
    
    int pilihan; 
    printf("Selamat datang di program latihan\n");
    printf("Masukkan pilihanmu: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            int num1, num2, sum, min, kali;
            float bagi;
            printf("Masukkan bilangan 1: ");
            scanf("%d", &num1);
            printf("Masukkan bilangan 2: ");
            scanf("%d", &num2);

            sum = num1 + num2;
            min = num1 - num2;
            kali = num1 * num2;
            bagi = num1 / num2;

            printf("Penjumlahan: %d\n", sum);
            printf("Pengurangan: %d\n", min);
            printf("Perkalian: %d\n", kali);
            printf("Pembagian: %.2f\n", bagi);
            break;

        case 2:
            int nilai;
            printf("Masukkan Nilai: ");
            scanf("%d", &nilai);

            if(nilai <= 50 && nilai <= 60) {
                printf("D");
            } else if(nilai >= 61 && nilai <= 70) {
                printf("C");
            } else if(nilai >= 71 && nilai <= 80) {
                printf("B");
            } else if(nilai >= 81 && nilai <= 90) {
                printf("A");
            } else {
                printf("A+");
            }
            break;
        case 3:
            int n;
            printf("Masukkan n: ");
            scanf("%d", &n);

            for(int i = 1; i <= n; i++) {
                if(i % 2 == 0) {
                    continue;
                } else {
                    printf("%d ", i);
                }
            }
            break;

        case 4:
            int baris, kolom;
            printf("Masukkan Baris: ");
            scanf("%d", &baris);
            printf("Masukkan Kolom: ");
            scanf("%d", &kolom);

            for(int i = 1; i <= kolom; i++) {
                for(int l = 1; l <= baris; l++) {
                    if(l == 2) {
                        printf("# ");
                    } else if (l == 4) {
                        printf("# ");
                    } else {
                        printf("%d ", l);
                    }
                }
                printf("\n");
            }
            break;

        case 5:
            int h, total = 0, angka;
            float average;

            printf("Masukkan h: ");
            scanf("%d", &h);

            for(int k = 1; k <= h; k++) {
                printf("Masukkan angka %d: ", k);
                scanf("%d", &angka);

                total += angka;
            }
            average = total / h;
    
            printf("Total: %d\n", total);
            printf("Rata-rata: %f", average);
            break;

        case 6: 
            printf("Menentukan jenis bilangan: \n");
            
            int num, isPrime = 1; 

            // Input bilangan
            printf("Masukkan bilangan: ");
            scanf("%d", &num);

            // Cek genap atau ganjil
            if (num % 2 == 0) {
                printf("bilangan genap.\n");
            } else {
                printf("bilangan ganjil.\n");
            }

            // Cek bilangan prima
            if (num <= 1) {
                isPrime = 0; // Jika bilangan kurang dari atau sama dengan 1, bukan prima
            } else {
                for (int i = 2; i * i <= num; i++) {
                    if (num % i == 0) {
                        isPrime = 0; // Jika num habis dibagi i, maka bukan prima
                        break; // Keluar dari loop
                    }
                }
            }

            // Menampilkan hasil bilangan prima
            if (isPrime && num > 1) {
                printf("bilangan prima.\n");
            }

        case 7:
            int u;
            printf("Masukkan u: ");
            scanf("%d", &u);

            for(int r = 1; r <= u; r++) {
                for(int b = 1; b <= r; b++) {
                    printf("%d", r);
                }
                printf("\n");
            }
            break;
        case 8: 
            printf("Program bilangan ganjil\n");

            int ganjil;
            printf("Mau berapa angka: ");
            scanf("%d", &ganjil);

            for(int t = 1; t <= ganjil; t++) {
                if(t % 2 == 0) {
                    continue;
                } else {
                    printf("%d ", t);
                }
            }
            break;
        case 9: 
            int e, nums, max, nums_min;

            printf("Masukkan e: ");
            scanf("%d", &e);

            printf("Masukkan bilangan ke 1: ");
            scanf("%d", &nums);

            max = nums;
            nums_min = nums;
            for(int o = 2; o <= e; o++) {
                printf("Masukkan bilangan ke %d: ", o);
                scanf("%d", &nums);

                if(nums < nums_min) {
                    nums_min = nums;
                }

                if(nums > max) {
                    max = nums;
                }
            }
            printf("Bilangan terkecil: %d\n", nums_min);
            printf("Bilangan terbesar: %d", max);
            break;
            
        default:
            printf("Belum Tersedia!");
            break;
    }
    
    return 0;

}