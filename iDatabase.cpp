#include "iDatabase.h"

void IDatabase::initDatabase()
{
    database=QSqlDatabase::addDatabase("QSQLITE");  //添加sql lite数据库驱动
    QString aFile="../../lib4a.db";
    database.setDatabaseName(aFile);                //设置数据库名称
    //打开数据库
    if(!database.open()){
        qDebug()<<"fail to open database";
    }else{
        qDebug()<<"open dataBase is ok";
    }
    return;
}

IDatabase::IDatabase(QObject *parent) : QObject(parent)
{
    initDatabase();
}
