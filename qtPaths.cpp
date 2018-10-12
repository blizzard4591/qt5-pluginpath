#include <QCoreApplication>
#include <QStringList>

#include <iostream>

int main() {
	QStringList const paths = QCoreApplication::libraryPaths();
	
	if (paths.size() == 1) {
		std::cout << paths.join("").toStdString() << std::endl;
		return 0;
	} else if (paths.size() == 0) {
		std::cout << "$LOCAL" << std::endl;
		return 1;
	} else {
		auto it = paths.constBegin();
		auto const end = paths.constEnd();
		for (; it != end; ++it) {
			std::cout << it->toStdString() << std::endl;
		}
		return 2;
	}
}
