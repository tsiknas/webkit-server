#include <QObject>

class QTcpServer;
class WebPage;

class Server : public QObject {
  Q_OBJECT

  public:
    Server(QObject *parent, bool ignoreSslErrors);
    bool start();
    quint16 server_port() const;

  public slots:
    void handleConnection();

  private:
    QTcpServer *m_tcp_server;
    bool m_ignore_ssl_errors;
};

