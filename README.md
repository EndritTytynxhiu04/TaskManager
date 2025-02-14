# Task Menager

## Përmbledhje

Ky është një menaxher i thjeshtë i detyrave të bazuar në terminal, i shkruar në C++. Ai lejon përdoruesit të shtojnë, listojnë, shënojnë dhe fshijnë detyrat, me ruajtje të dhënash në një skedar teksti (`tasks.txt`).

## Karakteristikat

- **Shto Detyrë:** Përdoruesit mund të shtojnë një detyrë të re me një përshkrim.
- **Listo Detyrat:** Shfaq të gjitha detyrat me statusin e përfundimit.
- **Shëno Detyrën si e Përfunduar:** Lejon përdoruesit të shënojnë një detyrë si të përfunduar.
- **Fshi Detyrën:** Përdoruesit mund të heqin një detyrë nga lista.
- **Ruajtje e Përhershme:** Detyrat ruhen në `tasks.txt` dhe ngarkohen kur programi fillon.

## Si Funksionon

1. Programi ngarkon detyrat nga `tasks.txt` në nisje.
2. Përdoruesit ndërveprojnë përmes një menuje për të kryer veprime.
3. Ndryshimet ruhen automatikisht në `tasks.txt`.

## Instalimi & Përdorimi

### Kompilimi

Për të kompiluar programin, përdorni një përpilues C++ si `g++`:

```sh
 g++ -o task_manager task_manager.cpp
```

### Ekzekutimi i Programit

Ekzekutoni skedarin e përpiluar:

```sh
 ./task_manager
```

### Shembull Përdorimi

```
Task Manager:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Delete Task
5. Exit
Choose an option:
```

## Formati i Skedarit të Ruajtjes

Skedari `tasks.txt` ruan detyrat në formatin e mëposhtëm:

```
<task_id> <completed_status> <task_description>
```

Shembull:

```
1 0 Bli ushqime
2 1 Përfundo raportin
```

- `task_id` është një identifikues unik.
- `completed_status`: `0` (jo e përfunduar) ose `1` (e përfunduar).
- `task_description`: Përshkrimi tekstual i detyrës.

## Problemet e Njohura

- Programi nuk mbështet redaktimin e detyrave.
- Nuk trajton mirë modifikimet e njëkohshme.

## Përmirësime të Ardhshme

- Shtimi i aftësisë për të redaktuar detyrat.
- Implementimi i prioritizimit të detyrave.
- Përmirësimi i trajtimit të gabimeve.

## Licenca

Ky program është open-source dhe i lirë për t'u përdorur nën Licencën MIT.

