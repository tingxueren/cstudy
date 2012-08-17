std::istream& get(std::istream& in)
{
	int ival;

	while (in >> ival, !in.eof()) { // 遇到文件结束符前一直读入数据
		if (in.bad()) // 出现系统级故障
			throw std::runtime_error("IO stream corrupted");
		if (in.fail()) { // 出现可恢复故障
			std::cerr << "bad data, try again." << endl;//提示
			in.clear(); // 恢复流
			in.ignore(200, ' '); // 跳过类型非法的输入
			continue; // 继续读入数据
		
		}
		// 读入正常
		std::cout << ival << " ";

	}
	in.clear();
	return in;
}	
