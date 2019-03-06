#pragma once


#include <string>
#include <vector>
#include <Eigen/Core>

using namespace std;
using namespace Eigen;

class CReadWriteAsc
{
public:
	//************************************
	// Method:    readAsc
	// Returns:   void
	// Function:  ����asc�ļ�
	// Time:      2014/08/05
	// Author:    Qian
	//************************************
	static bool readAsc( const string& filename, vector<Vector2d>& points);

	//************************************
	// Method:    writeAsc
	// Returns:   void
	// Function:  д��asc�ļ�
	// Time:      2014/08/05
	// Author:    Qian
	//************************************
	static bool writeAsc( const string& filename, const vector<Vector2d>& points );
};