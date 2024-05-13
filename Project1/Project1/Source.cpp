void ve_tuong_tren()
{
	int x = 10, y = 1;
	while (x <= 100)
	{
		gotoXY(x, y);
		cout << "+";
		x++;
	}
}
void ve_tuong_duoi()
{
	int x = 10, y = 26;
	while (x <= 100)
	{
		gotoXY(x, y);
		cout << "+";
		x++;
	}
}
void ve_tuong_phai()
{
	int x = 100, y = 1;
	while (y <= 26)
	{
		gotoXY(x, y);
		cout << "+";
		y++;
	}
}
void ve_tuong_trai()
{
	int x = 10, y = 1;
	while (y <= 26)
	{
		gotoXY(x, y);
		cout << "+";
		y++;
	}
}
void ve_tuong()
{
	SetColor(11);
	ve_tuong_tren();
	ve_tuong_duoi();
	ve_tuong_phai();
	ve_tuong_trai();
	SetColor(7);
}
void khoi_tao_ran(int toadox[], int toadoy[])
{
	int x = 50, y = 13;
	for (int i = 0; i < sl; i++)
	{
		toadox[i] = x;
		toadoy[i] = y;
		x--;
	}
}
void ve_ran(int toadox[], int toadoy[])
{
	for (int i = 0; i < sl; i++)
	{
		gotoXY(toadox[i], toadoy[i]);
		if (i == 0)
		{
			cout << "O";
		}
		else
		{
			cout << "o";
		}
	}
}
void xoa_du_lieu_cu(int toadox[], int toadoy[])
{
	for (int i = 0; i < sl; i++)
	{
		gotoXY(toadox[i], toadoy[i]);
		cout << " ";
	}
}
void xu_ly_ran(int toadox[], int toadoy[], int x, int y, int& xqua, int& yqua)
{
	//b1: them toa do moi vao dau mang
	them(toadox, x); //1 hàm thêm sl sẽ tăng lên 1 dẫn đến bị sai
	them(toadoy, y); // các bạn vào hàm thêm sẽ thấy sl++

	if (kt_ran_an_qua(xqua, yqua, toadox[0], toadoy[0]) == false)
	{
		//b2: xoa toa do cuoi mang
		xoa(toadox, sl - 1); //hàm xóa cũng có giảm sl
		xoa(toadoy, sl - 1); //nên sẽ bù lại sl thay đổi ở trên

	}
	else
	{
		//rắn sẽ tăng 2 đốt khi ăn quả. vì lí do hàm thêm đã tăng sl 2 lần
		// vì vậy nên mình cần giảm sl lại 1 lần thế là đúng
		sl--;// đây là 1 cách fix của mình. cho số lượng giảm lại nhé
		//--------------------------------
		tao_qua(xqua, yqua, toadox, toadoy);
	}
	//b3: ve ran
	ve_ran(toadox, toadoy);
}