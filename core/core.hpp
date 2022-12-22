#ifndef CORE_HPP
#define CORE_HPP

#include "board.hpp"

//
// ������� ��������� ���������, ������������ ��������� ������� ��������
//
struct Main
{
public:
	Main() : is_open(true), board(nullptr) {}
	~Main()
	{
		delete board;
	}

	//�������������, ���� ������ ������ ������ ������ ������� true
	bool init()
	{
		//����������� ��������� �������� ��� ������ ��������������� ����������, ��������:
		//latter = 'd';

		board = new Board(8, 8);
		board->addChecker(0, 0, Checker::White);
		board->addChecker(0, 0, Checker::White);

		return true;
	}
	//����������
	//���������� ����� ���������� (��������� ������� � ������� ����� ����������� � ������ �������)
	void update()
	{
		
	}
	//���������
	//��������� ����� ���������� (�������� ���������� ����� �������� ��������� �����)
	void render()
	{
		//���� ���� �������� ������� ������������ system("cls")
	}

	//������� �� ���������
	bool isOpen() const { return is_open; }
	//��������� ���������
	void close() { is_open = false; }

private:
	Board* board;	//<-- ������� �����
	bool is_open;	//<-- ���������� ������� �� ���������
	
	//���������� ��������� ����� ����� ���������� (���� ���� ������������� �������� ���������� ��������� �� ����� ����)
	//char latter;	//<-- ��������
};

#endif // !CORE_HPP