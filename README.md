# minitalk
Minitalk это проект на Си. Он создает два терминальных приложения client и server.
Эти 2 приложения общаются друг с другом с помощью 2-ух unix сигналов SIGUSR1 и SIGUSR2 который интерпритируются как 0 или 1.
Таким образом клиент может отправить сообщение серверу, а сервер его выведет.
![client](https://github.com/wyholger/minitalk/blob/main/img/Screen_client.png?raw=true)![server](https://github.com/wyholger/minitalk/blob/main/img/Screen_server.png?raw=true)
