// Площадь сечения S mm2
var r_area = pi * (Math.pow((c3 / 2), 2));
// Длина провода спирали (одного) mm

var av_diam = c3+c4;
	var r_wirelength = (Math.sqrt(Math.pow((pi*av_diam), 2) + Math.pow(c3*c1*c9, 2) )) * c5 + (c7*2);
	if (c11 == 1 && c1 >= 2) { var r_wirelength = r_wirelength * 1.2; }
	if (c1 == 1) {	document.getElementById("twisted").checked=0; }

	// Сопротивление спирали R ом

	ar r_resist = (c8 * (r_wirelength+(c1*c3)) / r_area / 1000) / (c2 * c1);
	if (c10 == 1) { var r_resist = r_resist * ohm_correct; }
// Добавляем параллельное сопротивление Клэптона
	if (c9 == 3) { var r_resist = (r_resist * clp_resist) / (r_resist + clp_resist); }
	

// Мощность P ватт
	var r_power = Math.pow((c6), 2)/r_resist;
	// Ток I ампер
	var r_curent = c6/r_resist;
	// Ширина спирали mm (за шаг принято сечение провода)
	var r_cowidth = c1 * (c3*c9) * c5;
	// Power density (Поверхностная мощность) W/mm²
	var r_powden = r_power / ((pi*2) * ((av_diam/2) * ((c3*2*(c2*c1*1.8)) * c5)));
	var mm_ras = (((pi*2) * ((av_diam/2) * ((c3*2*(c2*c1*1.8)) * c5)))) * 0.3;

	var koef = (43 - mm_ras) / 100;
	if (koef <= 0.2) { var koef = 0.2; }
		
	var den_kon = koef;
	var den_low = koef - 0.05;
	var den_hea = koef + 0.05;
	var den_ovh = koef + 0.1;
	
	// Opt Power (оптимальная мощность)
	var r_optpower = ((pi*2) * ((av_diam/2) * ((c3*2*(c2*c1*1.8)) * c5))) * den_kon;

	
// Температура спирали К (сухая) отдельно считаем сопротивление и ток для одной спирали
	var a_resist = (c8 * (r_wirelength+(c1*c3)) / r_area / 1000) / (c1);
	if (c10 == 1) { var a_resist = a_resist * ohm_correct; }
	var a_curent = c6/a_resist;
	var r_tempk = Math.pow( (c6 * a_curent) / (0.31 * pi * 5.67 * Math.pow(10, -8) * c3 * Math.pow(10, -3) * r_wirelength * Math.pow(10, -3)), (1/4) );

// Температура спирали C (сухая)
	var r_tempc = r_tempk - 273.15;

// �­нергия J (Джоуль) Вт = Дж/с = кг·м²/с³
	var r_enerj = r_power;

// �спарим жидкости за минуту
	var r_vapeliq = 60 / (r_enerj / 631.8) / 10000;
	