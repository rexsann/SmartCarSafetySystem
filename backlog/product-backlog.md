# Product Backlog — Smart Car Safety System

## 1. Deskripsi Proyek

Smart Car Safety System adalah proyek Internet of Things (IoT) untuk mendeteksi kadar gas karbon monoksida (CO) di dalam kabin mobil menggunakan ESP32 dan sensor MQ-7. Sistem dirancang untuk menampilkan informasi kadar CO melalui OLED, memberikan peringatan melalui buzzer dan LED, serta menyediakan monitoring melalui web berbasis Laravel dan notifikasi kepada pengguna melalui smartphone.

## 2. Product Backlog

Story Points dan prioritas pada tabel berikut merupakan estimasi awal yang perlu disepakati oleh kedua anggota tim.

| ID | User Story / Pekerjaan | Story Points | Prioritas | Penanggung Jawab | Jadwal | Progres |
|---|---|---:|---|---|---|---:|
| US-01 | Analisis Kebutuhan Sistem | 3 | P1 - High | Muhammad Ihsan | 8–14 Sep 2026 | 75% |
| US-02 | Studi Literatur Deteksi Gas CO | 3 | P1 - High | Nicolas Situmorang | 15–21 Sep 2026 | 70% |
| US-03 | Penentuan Spesifikasi Komponen | 2 | P1 - High | Muhammad Ihsan | 14–18 Sep 2026 | 80% |
| US-04 | Analisis Kebutuhan Fungsional dan Non-Fungsional | 3 | P1 - High | Muhammad Ihsan | 14–21 Sep 2026 | 80% |
| US-05 | Desain Arsitektur Sistem | 3 | P1 - High | Nicolas Situmorang | 17–23 Sep 2026 | 80% |
| US-06 | Desain Rangkaian Hardware | 5 | P1 - High | Nicolas Situmorang | 21–29 Sep 2026 | 70% |
| US-07 | Desain Tampilan Monitoring OLED | 3 | P2 - Medium | Muhammad Ihsan | 21–29 Sep 2026 | 75% |
| US-08 | Desain Dashboard Monitoring Web | 5 | P2 - Medium | Nicolas Situmorang | 21–29 Sep 2026 | 85% |
| US-09 | Implementasi Pembacaan Sensor MQ-7 | 5 | P1 - High | Muhammad Ihsan | 28 Okt–6 Nov 2026 | 0% |
| US-10 | Implementasi Tampilan OLED | 3 | P2 - Medium | Nicolas Situmorang | 28 Okt–6 Nov 2026 | 0% |
| US-11 | Implementasi Indikator LED dan Buzzer | 3 | P1 - High | Muhammad Ihsan | 2–9 Nov 2026 | 0% |
| US-12 | Implementasi Koneksi IoT | 5 | P1 - High | Nicolas Situmorang | 2–11 Nov 2026 | 0% |
| US-13 | Implementasi Notifikasi Smartphone | 5 | P2 - Medium | Muhammad Ihsan | 9–16 Nov 2026 | 0% |
| US-14 | Implementasi Logika Status Kondisi | 3 | P1 - High | Nicolas Situmorang | 28 Okt–6 Nov 2026 | 0% |
| US-15 | Implementasi Monitoring dan Penyimpanan Data | 5 | P2 - Medium | Nicolas Situmorang | 9–17 Nov 2026 | 0% |
| OP-01 | Pengujian Sensor CO | 3 | P1 - High | Muhammad Ihsan | 16 Nov–3 Des 2026 | 0% |
| OP-02 | Pengujian Alarm dan Indikator | 2 | P1 - High | Muhammad Ihsan | 23 Nov–4 Des 2026 | 0% |
| OP-03 | Pengujian Dashboard dan Notifikasi | 3 | P2 - Medium | Nicolas Situmorang | 1–9 Des 2026 | 0% |
| OP-04 | Pengujian Sistem Secara Keseluruhan | 5 | P1 - High | Muhammad Ihsan | 14–28 Des 2026 | 0% |
| OP-05 | Evaluasi dan Perbaikan Sistem | 3 | P1 - High | Muhammad Ihsan | 21 Des 2026–4 Jan 2027 | 0% |
| OP-06 | Finalisasi Prototype dan Dokumentasi | 5 | P1 - High | Nicolas Situmorang | 28 Des 2026–8 Jan 2027 | 0% |

## 3. Keterangan

- **Story Points:** perkiraan usaha dan kompleksitas relatif pekerjaan, bukan jumlah jam pengerjaan.
- **P1 - High:** prioritas tinggi karena berkaitan dengan kebutuhan utama atau tahapan penting sistem.
- **P2 - Medium:** prioritas menengah yang mendukung fungsi monitoring dan penyempurnaan sistem.
- **Progres:** persentase perkembangan pekerjaan yang dilaporkan tim.
- **US:** User Story atau pekerjaan pada tahap pengembangan.
- **OP:** pekerjaan pada tahap pengujian, evaluasi, dan finalisasi.
- Story Points dan prioritas merupakan usulan yang harus disepakati oleh kedua anggota tim.
- Perubahan progres harus sesuai dengan pekerjaan yang benar-benar telah dilakukan.

## 4. Anggota Tim

1. **Muhammad Ihsan** — analisis kebutuhan, spesifikasi komponen, implementasi sensor, indikator, notifikasi, serta pengujian.
2. **Nicolas Situmorang** — studi literatur, desain arsitektur dan rangkaian, monitoring, koneksi IoT, serta dokumentasi.

## 5. Catatan Sprint

Product Backlog menjadi daftar pekerjaan utama yang dapat diprioritaskan dan dipilih untuk setiap Sprint. Pekerjaan yang masuk ke Sprint ditentukan berdasarkan prioritas, ketergantungan antartugas, kapasitas tim, dan target Sprint.

Status dan progres backlog diperbarui sesuai perkembangan pekerjaan yang sebenarnya. Perubahan teknologi, termasuk penggunaan web monitoring berbasis Laravel sebagai pengganti Blynk IoT, harus diselaraskan dengan desain sistem dan kebutuhan fungsional proyek.
