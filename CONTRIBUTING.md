# Contribution Guide — Smart Car Safety System

## 1. Tujuan

Dokumen ini berisi aturan kolaborasi dan pengelolaan kode untuk proyek Smart Car Safety System. Setiap anggota tim wajib mengikuti aturan ini agar perubahan proyek terorganisasi, mudah ditinjau, dan memiliki riwayat yang jelas.

## 2. Anggota Tim

| Nama | Tanggung Jawab |
|---|---|
| Muhammad Ihsan | Analisis kebutuhan, sensor CO, logika peringatan, dan pengujian |
| Nicolas Situmorang | Desain sistem, OLED, koneksi IoT, monitoring, dan dokumentasi |

Pembagian tanggung jawab dapat disesuaikan berdasarkan kesepakatan tim.

## 3. Struktur Branch

| Branch | Fungsi |
|---|---|
| `main` | Menyimpan versi proyek yang telah ditinjau dan dianggap stabil |
| `develop` | Branch integrasi untuk menggabungkan pekerjaan anggota tim |
| `feature/nama-fitur` | Branch untuk mengerjakan fitur atau tugas tertentu |

Contoh branch fitur:
- `feature/baca-mq7`
- `feature/tampilan-oled`
- `feature/web-monitoring`
- `feature/notifikasi`

## 4. Aturan Penggunaan Branch

1. Branch `main` digunakan untuk versi proyek yang stabil.
2. Pengembangan fitur dilakukan pada branch `feature/...`.
3. Setelah pekerjaan selesai, anggota tim mengirimkan Pull Request menuju `develop`.
4. Perubahan harus ditinjau oleh anggota tim lainnya sebelum digabungkan.
5. Perubahan dari `develop` menuju `main` dilakukan setelah integrasi dan pemeriksaan yang diperlukan.
6. Hindari mengerjakan perubahan fitur secara langsung pada `main`.

## 5. Aturan Commit

Gunakan pesan commit yang singkat, jelas, dan menggambarkan perubahan.

Format yang disarankan:

`jenis: deskripsi perubahan`

Contoh:
- `docs: update product backlog`
- `docs: add contribution guide`
- `feat: add MQ-7 sensor reading`
- `fix: correct sensor threshold logic`
- `test: add sensor testing notes`

Jenis commit:
- `feat`: menambahkan fitur.
- `fix`: memperbaiki kesalahan.
- `docs`: memperbarui dokumentasi.
- `test`: menambahkan atau memperbarui pengujian.
- `chore`: konfigurasi atau pemeliharaan proyek.

## 6. Alur Kerja Kolaborasi

1. Periksa tugas yang telah disepakati pada Product Backlog.
2. Pilih tugas sesuai prioritas dan kesepakatan Sprint.
3. Buat atau gunakan branch fitur yang sesuai.
4. Kerjakan perubahan hanya pada bagian yang menjadi tanggung jawab.
5. Simpan perubahan dengan commit yang jelas.
6. Push branch ke GitHub.
7. Buat Pull Request menuju `develop`.
8. Minta anggota tim lainnya meninjau perubahan.
9. Perbaiki jika ada masukan, lalu gabungkan setelah disetujui.
10. Perbarui status pekerjaan pada Product Backlog sesuai perkembangan sebenarnya.

## 7. Aturan Dokumentasi

- Dokumentasi proyek disimpan di repository GitHub.
- Perubahan kebutuhan, desain, atau implementasi yang relevan harus diikuti pembaruan dokumentasi.
- Product Backlog harus mencerminkan pekerjaan, prioritas, dan progres aktual.
- Informasi konfigurasi rahasia, token, kata sandi, dan kredensial tidak boleh dimasukkan ke repository.

## 8. Kesepakatan Tim

Kedua anggota tim bertanggung jawab menjaga keteraturan repository, meninjau perubahan, dan memastikan bahwa pekerjaan yang digabungkan sesuai dengan kebutuhan proyek Smart Car Safety System.
