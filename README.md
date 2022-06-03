# C++ OOP code

Một công ty chuyển lắp rắp xe máy muốn xây dựng 1 chương trình để quản lý các xe máy mình lắp rắp.
Biết rằng mỗi xe máy sẽ có các bộ phận cần được quản lý thông tin mã số xe, thông tin động cơ, thông tin 2 bánh xe, thông tin khung xe.
Công ty có 3 loại động cơ:

*	Động cơ loại A
*	Động cơ loại B
*	Động cơ loại C

Mỗi loại động cơ sẽ có thông tin như sau:
*	Mã số
*	Loại động cơ (A, B, C)
*	Đơn giá
*	Hãng sản xuất
*	Riêng động cơ loại B có thêm thông tin xác định là đạt tiêu chuẩn 1 hay tiêu chuẩn 2 hay tiêu chuẩn 3 của công ty.

Biết rằng đơn giá từng loại như sau: loại A – 500, loại B tiêu chuẩn 1 – 600, loại B tiêu chuẩn 2  - 700, loại B tiêu chuẩn 3 – 800, loại C – 400.
Bánh xe thì chia làm 2 loại: Loại D, Loại E. Mỗi bánh xe sẽ có thông tin sau:
*	Mã số
*	Loại (D, E)
*	Đơn giá (loại D giá 400, loại E giá 300)
*	Hãng sản xuất

Khung xe sẽ có 2 loại: Khung nhôm cách nhiệt, 	Khung nhựa. Mỗi khung sẽ có thông tin cơ bản sau:
*	Mã số
*	Loại khung (nhôm, nhựa)
*	Đơn giá (khung nhôm cách nhiệt có giá 500, nhựa có giá 200)
*	Hãng sản xuất

Viết chương trình hỗ trợ công ty quản lý xe máy của họ với một số thao tác cơ bản sau:
(Các yếu tố đánh giá: chương trình chạy, áp dụng tốt tư tưởng lập trình hướng đối tượng và sử dụng được kỹ thuật kế thừa, đa hình, nạp chồng toán tử...)
*	Nhập danh sách N xe máy
*	Hiển thị lại danh sách N xe máy, trước khi người dùng tiến hành lưu (xuất luôn giá của một xe máy thông qua tổng giá của các bộ phận thành phần)
*	Lưu danh sách xe máy xuống file danh_sach_xe_may.txt
