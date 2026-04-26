**PART I**<br>
<br>
1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).<br>
**Вывод:**<br>
*Репозиторий создан.*<br>
<br>

2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.<br>
**Команда:**<br>
`git add README.md`<br>
`git commit -m"added README.md"`<br>
`git push origin master`<br>
**Вывод:**<br>
*Результат после git commit -m"added README.md":*<br>
[master (root-commit) de4d203] added README.md<br>
 1 file changed, 0 insertions(+), 0 deletions(-)<br>
 create mode 100644 README.md<br>
*Результат после git push origin master:*<br>
Username for 'https://github.com': solyuway<br>
Password for 'https://solyuway@github.com': <br>
Enumerating objects: 3, done.<br>
Counting objects: 100% (3/3), done.<br>
Writing objects: 100% (3/3), 224 bytes | 74.00 KiB/s, done.<br>
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)<br>
remote: <br>
remote: Create a pull request for 'master' on GitHub by visiting:<br>
remote:      https://github.com/solyuway/lab02/pull/new/master<br>
remote: <br>
To https://github.com/solyuway/lab02.git<br>
 * [new branch]      master -> master<br>
<br>

3. Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;. 
**Команда:**<br>
`cat hello_world.cpp`<br>
`#include <iostream>`<br>
`using namespace std;`<br>
`int main() {`<br>
`cout << "Hello world" << endl;`<br>
`return 0;`<br>
`}`<br>
**Вывод:**<br>
*Файл создан*<br>
<br>

4. Добавьте этот файл в локальную копию репозитория.<br>
**Команда:**<br>
`git add hello_world.cpp`<br>
**Вывод:**<br>
*Файл добавлен*<br>
<br>

5. Закоммитьте изменения с осмысленным сообщением.<br>
**Команда:**<br>
`git commit -m"Add hello_world.cpp with bad style"`<br>
**Вывод:**<br>
[master deb411c] Add hello_world.cpp with bad style<br>
 1 file changed, 6 insertions(+)<br>
 create mode 100644 hello_world.cpp<br>
<br>

6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.<br>
**Команда:**<br>
`nano hello_world.cpp`<br>
**Вывод:**<br>
*Файл изменён*<br>
<br>

7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?<br>
**Команда:**<br>
`git commit -am"Modify hello_world.cpp to ask name"`<br>
**Вывод:**<br>
[master a053da4] Modify hello_world.cpp to ask name<br>
 1 file changed, 5 insertions(+), 1 deletion(-)<br>
**Ответ на вопрос:**<br>
*Потому что файл уже был добавлен ранее. Git отслеживает его изменения автоматически. "git commit -a" включает все изменённые файлы.*<br>
<br>

8. Запуште изменения в удалёный репозиторий.<br>
**Команда:**<br>
`git push origin master`<br>
**Вывод:**<br>
Username for 'https://github.com': solyuway<br>
Password for 'https://solyuway@github.com':<br> 
Enumerating objects: 7, done.<br>
Counting objects: 100% (7/7), done.<br>
Compressing objects: 100% (6/6), done.<br>
Writing objects: 100% (6/6), 805 bytes | 805.00 KiB/s, done.<br>
Total 6 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)<br>
To https://github.com/solyuway/lab02.git<br>
   de4d203..a053da4  master -> master<br>
<br>

9. Проверьте, что история коммитов доступна в удалёный репозитории.<br>
**Команда:**<br>
`git log --oneline --graph`<br>
**Вывод:**<br>
* a053da4 (HEAD -> master, origin/master) Modify hello_world.cpp to ask name<br>
* deb411c Add hello_world.cpp with bad style<br>
* de4d203 added README.md<br>
<br>
<br>

**PART II**<br>
<br>

1. В локальной копии репозитория создайте локальную ветку patch1.<br>
**Команда:**<br>
`git checkout -b patch1`<br>
**Вывод:**<br>
*Switched to a new branch 'patch1'*<br>
<br>

2. Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;.<br>
**Команда:**<br>
`nano hello_world.cpp`<br>
**Вывод:**<br>
*Файл изменён*<br>
<br>

3. commit, push локальную ветку в удалённый репозиторий.<br>
**Команда:**<br>
`git commit -am "Remove using namespace std"`<br>
`git push origin patch1`<br>
**Вывод:**<br>
*Результат после git commit -am"Remove using namespace std":*<br>
[patch1 cf4e41d] Remove using namespace std<br>
 1 file changed, 4 insertions(+), 5 deletions(-)<br>
*Результат после git push origin patch1:*<br>
Username for 'https://github.com': solyuway<br>
Password for 'https://solyuway@github.com': <br>
Enumerating objects: 5, done.<br>
Counting objects: 100% (5/5), done.<br>
Compressing objects: 100% (3/3), done.<br>
Writing objects: 100% (3/3), 422 bytes | 422.00 KiB/s, done.<br>
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)<br>
remote: <br>
remote: Create a pull request for 'patch1' on GitHub by visiting:<br>
remote:      https://github.com/solyuway/lab02/pull/new/patch1<br>
remote: <br>
To https://github.com/solyuway/lab02.git<br>
 * [new branch]      patch1 -> patch1<br>
<br>

4. Проверьте, что ветка patch1 доступна в удалёный репозитории.<br>
**Команда:**<br>
`git log --oneline --graph`<br>
**Вывод:**<br>
* cf4e41d (HEAD -> patch1, origin/patch1) Remove using namespace std<br>
* a053da4 (origin/master, master) Modify hello_world.cpp to ask name<br>
* deb411c Add hello_world.cpp with bad style<br>
* de4d203 added README.md<br>
<br>

5. Создайте pull-request patch1 -> master.<br>
**Вывод:**<br>
*pull-request создан*<br>
<br>

6. В локальной копии в ветке patch1 добавьте в исходный код комментарии.<br>
**Команда:**<br>
`nano hello_world.cpp`<br>
**Вывод:**<br>
*Комментарий добавлен*<br>
<br>

7. commit, push. <br>
**Команда:**<br>
`git commit -am"Add comments"`<br> 
`git push origin patch1`<br>
**Вывод:**<br>
*Результат после git commit -am"Add comments":*<br>
[patch1 5cb3ce6] Add comments<br>
 1 file changed, 2 insertions(+)<br>
*Результат после git push origin patch1:*<br>
Username for 'https://github.com': solyuway<br>
Password for 'https://solyuway@github.com': <br>
Enumerating objects: 5, done.<br>
Counting objects: 100% (5/5), done.<br>
Compressing objects: 100% (3/3), done.<br>
Writing objects: 100% (3/3), 500 bytes | 500.00 KiB/s, done.<br>
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)<br>
To https://github.com/solyuway/lab02.git<br>
   cf4e41d..5cb3ce6  patch1 -> patch1<br>
<br>

8. Проверьте, что новые изменения есть в созданном на шаге 5 pull-request.<br>
**Команда:**<br>
`git log --oneline --graph`<br>
**Вывод:**<br>
* 5cb3ce6 (HEAD -> patch1, origin/patch1) Add comments<br>
* cf4e41d Remove using namespace std<br>
* a053da4 (origin/master, master) Modify hello_world.cpp to ask name<br>
* deb411c Add hello_world.cpp with bad style<br>
* de4d203 added README.md<br>
<br>

9. В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.<br>
**Вывод:**<br>
*Выполнено слияние pull-request, ветка patch1 удалена*<br>
<br>

10. Локально выполните pull.<br>
**Команда:**<br>
`git checkout master`<br>
`git pull origin master`<br>
**Вывод:**<br>
*Результат после git checkout master:*<br>
Switched to branch 'master'<br>
*Результат после git pull origin master:*<br>
remote: Enumerating objects: 1, done.<br>
remote: Counting objects: 100% (1/1), done.<br>
remote: Total 1 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)<br>
Unpacking objects: 100% (1/1), 895 bytes | 447.00 KiB/s, done.<br>
From https://github.com/solyuway/lab02<br>
 * branch            master     -> FETCH_HEAD<br>
   a053da4..de1e78b  master     -> origin/master<br>
Updating a053da4..de1e78b<br>
Fast-forward<br>
 hello_world.cpp | 11 ++++++-----<br>
 1 file changed, 6 insertions(+), 5 deletions(-)<br>
<br>

11. С помощью команды git log просмотрите историю в локальной версии ветки master.<br> 
**Команда:**<br>
`git log --oneline --graph`<br>
**Вывод:**<br>
*   de1e78b (HEAD -> master, origin/master) Merge pull request #1 from solyuway/patch1<br>
|\  <br>
| * 5cb3ce6 (origin/patch1) Add comments<br>
| * cf4e41d Remove using namespace std<br>
|/  <br>
* a053da4 Modify hello_world.cpp to ask name<br>
* deb411c Add hello_world.cpp with bad style<br>
* de4d203 added README.md<br>
<br>

12. Удалите локальную ветку patch1.<br>
**Команда:**<br>
`git branch -d patch1`<br>
**Вывод:**<br>
*Deleted branch patch1 (was de1e78b).*<br>
<br>
<br>

**PART III**<br>
<br>

1. Создайте новую локальную ветку patch2.<br>
**Команда:**<br>
`git checkout -b patch2`<br>
**Вывод:**<br>
*Switched to a new branch 'patch2'*<br>
<br>

2. Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.<br>
**Команда:**<br>
`clang-format -style=Mozilla -i hello_world.cpp`<br>
**Вывод:**<br>
*code style изменён*<br>
<br>

3. commit, push, создайте pull-request patch2 -> master.<br>
**Команда:**<br>
`git commit -am"Apply Mozilla code style with clang-format"`<br>
`git push origin patch2`<br>
**Вывод:**<br>
*Результат после git commit -am"Apply Mozilla code style with clang-format":*<br>
[patch2 c11e621] Apply Mozilla code style with clang-format<br>
 1 file changed, 10 insertions(+), 8 deletions(-)<br>
*Результат после git push origin patch2:*<br>
Username for 'https://github.com': solyuway<br>
Password for 'https://solyuway@github.com':<br> 
Enumerating objects: 5, done.<br>
Counting objects: 100% (5/5), done.<br>
Compressing objects: 100% (3/3), done.<br>
Writing objects: 100% (3/3), 528 bytes | 528.00 KiB/s, done.<br>
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)<br>
remote: <br>
remote: Create a pull request for 'patch2' on GitHub by visiting:<br>
remote:      https://github.com/solyuway/lab02/pull/new/patch2<br>
remote: <br>
To https://github.com/solyuway/lab02.git<br>
 * [new branch]      patch2 -> patch2<br>
*pull-request создан*<br>
<br>

4. В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.<br> 
**Вывод:**<br>
*Комментарий был изменён*<br>
<br>

5. Убедитесь, что в pull-request появились конфликтны.<br>
**Вывод:**<br>
*Конфликты появились: "This branch has conflicts that must be resolved"*<br> 
<br>

6. Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.<br>
**Команда:**<br>
`git pull origin master --rebase`<br>
`git add hello_world.cpp`<br>
`git rebase --continue`<br>
**Вывод:**<br>
*Результат после git pull origin master --rebase:*<br>
remote: Enumerating objects: 5, done.<br>
remote: Counting objects: 100% (5/5), done.<br>
remote: Compressing objects: 100% (3/3), done.<br>
remote: Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)<br>
Unpacking objects: 100% (3/3), 997 bytes | 498.00 KiB/s, done.<br>
From https://github.com/solyuway/lab02<br>
 * branch            master     -> FETCH_HEAD<br>
   de1e78b..6ebdc23  master     -> origin/master<br>
Auto-merging hello_world.cpp<br>
CONFLICT (content): Merge conflict in hello_world.cpp<br>
error: could not apply c11e621... Apply Mozilla code style with clang-format<br>
hint: Resolve all conflicts manually, mark them as resolved with<br>
hint: "git add/rm <conflicted_files>", then run "git rebase --continue".<br>
hint: You can instead skip this commit: run "git rebase --skip".<br>
hint: To abort and get back to the state before "git rebase", run "git rebase --abort".<br>
hint: Disable this message with "git config advice.mergeConflict false"<br>
Could not apply c11e621... Apply Mozilla code style with clang-format<br>
*Результат после git rebase --continue:*<br>
[detached HEAD 1c8bfb7] Apply Mozilla code style with clang-format<br>
 1 file changed, 10 insertions(+), 8 deletions(-)<br>
Successfully rebased and updated refs/heads/patch2.<br>
<br>

7. Сделайте force push в ветку patch2. <br>
**Команда:**<br>
`git push origin patch2 --force-with-lease`<br>
**Вывод:**<br>
Username for 'https://github.com': solyuway<br>
Password for 'https://solyuway@github.com': <br>
Enumerating objects: 5, done.<br>
Counting objects: 100% (5/5), done.<br>
Compressing objects: 100% (3/3), done.<br>
Writing objects: 100% (3/3), 533 bytes | 533.00 KiB/s, done.<br>
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)<br>
To https://github.com/solyuway/lab02.git<br>
 + c11e621...1c8bfb7 patch2 -> patch2 (forced update)<br>
<br>

8. Убедитель, что в pull-request пропали конфликтны. 
**Вывод:**<br>
*В pull-request нет конфликтов*<br>
<br>

9. Вмержите pull-request patch2 -> master.<br>
**Команды:**<br>
`git checkout master`<br>
`git merge patch2`<br>
`git push origin master`<br>
**Вывод:**<br>
*Результат после git merge patch2:*<br>
Updating de1e78b..1c8bfb7<br>
Fast-forward<br>
 hello_world.cpp | 18 ++++++++++--------<br>
 1 file changed, 10 insertions(+), 8 deletions(-)<br>
*Результат после git push origin master:*<br>
Username for 'https://github.com': solyuway<br>
Password for 'https://solyuway@github.com': <br>
Total 0 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)<br>
To https://github.com/solyuway/lab02.git<br>
   6ebdc23..1c8bfb7  master -> master<br>


 
