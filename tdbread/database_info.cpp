#include "database_tdb.h"

void Database::Database_Info(std::string &infostr) {
	boost::replace_all(infostr,"'","\n"); // the single-quotes represent new lines in the database
	set_info(infostr);
}