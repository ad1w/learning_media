<h1 align="center">
  🌅 Alat Peraga Difraksi dan Interferensi Cahaya </h1>
<h4 align="center"> 
  https://journal.stkipsingkawang.ac.id/index.php/JIPF/article/view/2989 </h4>
<br>

## 💡 Dari mana semua ini dimulai?

Pengembangan ini bermula untuk menciptakan suatu alat peraga yang dapat digunakan untuk
mengajarkan materi fisika difraksi cahaya maupun interferensi cahaya.  Kedua materi tersebut seringkali diajarkan hanya
menggunakan gambar dan garis untuk menggambarkan cahaya yang bekerja. Akibatnya siswa hanya bisa
membayangkan terjadinya proses tersebut, maka pada penelitian ini saya membuat alat peraga ini agar
siswa dapat melihat secara langsung fenomena-fenomena seputar cahaya. 

## 🚀 Design dan Cara Kerja
Berikut merupakan tampilan alat peraga difraksi cahaya tersebut:
<p align="center">
<img height="400" width="800" src="https://github.com/ad1w/learning_media/blob/main/Diffraction%20Interference%20of%20Light/design.png" alt="image" />
</p>

Pada pengembangan ini saya memanfaatkan laser sabagai sumber sinar dan potongan (bingkai) sim-card
bekas sebagai celah yang akan dilalui sinar sebelum menuju ke layar tangkap. Sinar yang melewati celah
akan membentuk suatu pola unik dengan intensitas cahaya yang semakin redup ke samping. Bentuk pola
dan intensitas cahaya tersebut dapat bergantung pada jarak celah dengan layar tangkap, lebar celah
difraksi yang digunakan, serta sumber sinar. Pada layar tangkap terdapat komponen arduino dan modul
kamera yang dihubungkan dengan laptop, pola difraksi yang terbentuk di layar akan direkam oleh modul
kamera dan dapat dipantau melalui layar laptop yang juga telah terkoneksi dengan web server. Pada
halaman web server tersebut pengamat dapat mengambil gambar lalu disimpan.

## 🔍Hasil
Hasil gambar yang telah disimpan lalu dianalisis menggunakan aplikasi <b>Tracker Video Analysis</b> untuk
memperoleh grafik pola difraksi dan nilai-nilai yang dibutuhkan pengamat, misalnya intensitas cahaya
pada suatu titik. Pada uji coba alat peraga ini saya menggunakan dua variabel yakni jarak celah ke layar
tangkap dan ukuran lebar celah yang dapat dilihat secara lengkap pada tautan yang saya sematkan di atas.
Berikut merupakan hasil uji coba menggunakan variabel jarak celah ke layar tangkap:
<p align="center">
<img height="400" width="800" src="https://github.com/ad1w/learning_media/blob/main/Diffraction%20Interference%20of%20Light/hasil.png" alt="image" />
</p>

## 🎫 Sources
- Aplikasi Tracker: https://opensourcephysics.github.io/tracker-website/
- Aplikasi Arduino IDE: https://www.arduino.cc/en/software/
