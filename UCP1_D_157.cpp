//1.	Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
// jawaban : dengan cara membandingkan dua elemen berurutan dalam array dan menukar posisi mereka jika mereka berada dalam urutan yang salah. Proses ini di ulangi
//			 untuk setiap pasangan element dalam Array, sehingga elemen-elemenr yang lebih besar terdorong ke arah akhir aray secara bertahap
// contoh : pass 1
//			n 5 
//			3 2 4 5 1 nah ini dah keliahtan data mana yg mau ke ubah yakni tabel 0(3) dan 1(2) berubab menjadi 2 3 4 5 1
//			2 3 4 5 1 trus di bagian ini kita melihat apakah tabel 1(2) dan 2(4) udah berurutan jawab nya sudah menjadin 2 3 4 5 1
//			2 3 4 5 1 nah di bagian ini kita melihat lagi apakah tabel 2(4) dan 3(5) udah sesuai?? jawabnya sudah menjadi 2 3 4 5 1
//          2 3 4 5 1 nah di tabel ini kita melihat apakah tabel 3(5) dan tabel 4(1) udah sesuai? ternyata belum makanya di tukar 2 3 4 1 5 dan di sini kita mendapatkan 5 telah menempati posisi yg tepat
//          2 3 4 1 5 lanjut di sini apakah kita mengulagi lagi, apakah tabel 0(2) sudah sesuai dengan 1(3)?? ternyata sudah jadi tidak ada perubahan 2 3 4 1 5
//          2 3 4 1 5 lanjut di sini apakah kita melihat tabel 1(3) dan tabel 2(4) sudah sesaui?? ternyata sudah jadi tidak ada perubahan 2 3 4 1 5
//			2 3 4 1 5 lanjut di sini apakah kita melihat tabel 2(4) dan 3(1) sudah sesuai?? ternyata belum makanya di tukar menjadi 2 3 1 4 5 nah kita mendapatkan 4 dan 5 telah menempati posisi yang tepat
//			2 3 1 4 5 lanjut di sini apakah kita melihat tabel 0(2) dan 1(3) sudah sesuai?? ternyata sudah jadi tidak ada perunbahan 2 3 1 4 5 
//			2 3 1 4 5 lanjut di sini apakah kita melihat tabel 1(3) dan 2(1) sudah sesuai?? ternyata belum makanya di tukar menjadi 2 1 3 4 5 dan di sini kita mendapatkan 3 4 5 telah menempati posisi yang tepat
//			2 1 3 4 5 lanjut di sini apakah kita melihat tabel 0(2) dan 1(1) sudah sesuiai? ternyata belum makanya di tukar menjadi 1 2 3 4 5 dan di sini kita mendapatkan 2 3 4 5 telah menempati posisi yang tepat
//			1 2 3 4 5 lanjut di sini apakah kita melihat tabel 0(1) dan 1(2) sudah sesaui? ternyata sudah jadi tidak ada perubahan dan di sini kita mendapatkan  1 2 3 4 5 telah menempati posisi yang tepat
// 
//2.   	Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen
// jawabanya : dengan cara membaginya menjadi beberapa element yang di mana seteelah di bagi kemuadian di susun datanya dari yang terkecil kemudian terbesar dan kemudian data tersebut di gabungkan kembali dan jika
//			   data tersebut masih berantakan maka data tersebut di ulangi denagan proses yang sama sehingga terciptanya sususnan data yang sesuai dari kecil hingga yang besar
//3.	Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma mana yang harus dipilih? Jelaskan mengapa.
// Jawabanya : algoritma BubbleSort karena algoritman itu kelebihanya adalah algoritma yang paling simpel dalam mengsortir data dan sangat efisien jika sudah ada beberapa data yang berurutan
//		Konversi Algorithma berikut kedalam C++:
//		Repeat steps 2 and 3 varying j from 0 to n – 2
//		Find the minimum value in arr[j] to arr[n – 1]:
//		a.Set min_index = j
// 
// 
// 
// 
// 
// 
// 
// 
// 
//		b.Repeat step c varying i from j + 1 to n – 1
//		c.If arr[i] < arr[min_index] :
//		i.min_index = i fea y46
//		Swap arr[j] with arr[min_index]
// jawabanya : ket maaf pak, maaf mass kami udah dapat materinya cuman kalau di prakteknya kami belum dapat masss kami trakhir kali praktikum InsertionSort jadi maaf kalau salah atau saya kurang paham 
// 

#include <iostream>
using namespace std;

int fatur[157];
int n;

void input() {
	while (true) {
		cout << "Masukan banyak element Array :";
		cin >> n;
		if (n <= 57)
			break;
		else {
			cout << "\nArray maksimal 157 element.\n";
		}
	}

	cout << endl;
	cout << "=======================" << endl;
	cout << "Masukan element array :" << endl;
	cout << "====================== " << endl;
	 

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ":";
		cin >> fatur[i];
	}
}

void SelectionSort() {
	// Maaf mass saya gk paham jadi saya kerjakan sebisa saya

}

void display() {
	cout << endl;
	cout << "============================" << endl;
	cout << "Element Yang telah tersusun:" << endl;
	cout << "============================" << endl;

	for (int j = 0; j < n; j++) {
		cout << "Data ke-" << (j + 1) << ":";
		cout << fatur[j] << endl;
	}
	cout << endl;

}

int main() {
	input();
	SelectionSort();
	display();
	return 0;
}