#include <QDir.h>
#include <QString.h>
#include <QStringList.h>
#include <math.h>

namespace UtilitiesHQR {
  QString getDirFromPath(const QString* path);
  QString getFileNameFromPath(const QString* path, bool type = true);
  QString quotesPath(const QString* path);
  bool checkDir(const QString* destDirString, const QString* path);
  bool copyFiles(const QDir* templateDir, const QDir* destDir, const QStringList* dirs);
  bool delDir(QDir* dir, const QString* toDel);
  int numberOfCiphers(int number);
};