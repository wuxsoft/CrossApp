#ifndef __JAVA_UTIL_COLLECTIONS__
#define __JAVA_UTIL_COLLECTIONS__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
#define XMLVM_ITABLE_SIZE_java_util_Collections 0
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_Class
#define XMLVM_FORWARD_DECL_java_lang_Class
XMLVM_FORWARD_DECL(java_lang_Class)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_Comparable
#define XMLVM_FORWARD_DECL_java_lang_Comparable
XMLVM_FORWARD_DECL(java_lang_Comparable)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_IndexOutOfBoundsException
#define XMLVM_FORWARD_DECL_java_lang_IndexOutOfBoundsException
XMLVM_FORWARD_DECL(java_lang_IndexOutOfBoundsException)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_NullPointerException
#define XMLVM_FORWARD_DECL_java_lang_NullPointerException
XMLVM_FORWARD_DECL(java_lang_NullPointerException)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_ArrayList
#define XMLVM_FORWARD_DECL_java_util_ArrayList
XMLVM_FORWARD_DECL(java_util_ArrayList)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Collection
#define XMLVM_FORWARD_DECL_java_util_Collection
XMLVM_FORWARD_DECL(java_util_Collection)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Collections_EmptyList
#define XMLVM_FORWARD_DECL_java_util_Collections_EmptyList
XMLVM_FORWARD_DECL(java_util_Collections_EmptyList)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Collections_EmptyMap
#define XMLVM_FORWARD_DECL_java_util_Collections_EmptyMap
XMLVM_FORWARD_DECL(java_util_Collections_EmptyMap)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Collections_EmptySet
#define XMLVM_FORWARD_DECL_java_util_Collections_EmptySet
XMLVM_FORWARD_DECL(java_util_Collections_EmptySet)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Collections_SynchronizedMap
#define XMLVM_FORWARD_DECL_java_util_Collections_SynchronizedMap
XMLVM_FORWARD_DECL(java_util_Collections_SynchronizedMap)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Comparator
#define XMLVM_FORWARD_DECL_java_util_Comparator
XMLVM_FORWARD_DECL(java_util_Comparator)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Deque
#define XMLVM_FORWARD_DECL_java_util_Deque
XMLVM_FORWARD_DECL(java_util_Deque)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Enumeration
#define XMLVM_FORWARD_DECL_java_util_Enumeration
XMLVM_FORWARD_DECL(java_util_Enumeration)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Iterator
#define XMLVM_FORWARD_DECL_java_util_Iterator
XMLVM_FORWARD_DECL(java_util_Iterator)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_List
#define XMLVM_FORWARD_DECL_java_util_List
XMLVM_FORWARD_DECL(java_util_List)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Map
#define XMLVM_FORWARD_DECL_java_util_Map
XMLVM_FORWARD_DECL(java_util_Map)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Queue
#define XMLVM_FORWARD_DECL_java_util_Queue
XMLVM_FORWARD_DECL(java_util_Queue)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_RandomAccess
#define XMLVM_FORWARD_DECL_java_util_RandomAccess
XMLVM_FORWARD_DECL(java_util_RandomAccess)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_Set
#define XMLVM_FORWARD_DECL_java_util_Set
XMLVM_FORWARD_DECL(java_util_Set)
#endif
#ifndef XMLVM_FORWARD_DECL_org_apache_harmony_luni_internal_nls_Messages
#define XMLVM_FORWARD_DECL_org_apache_harmony_luni_internal_nls_Messages
XMLVM_FORWARD_DECL(org_apache_harmony_luni_internal_nls_Messages)
#endif
// Class declarations for java.util.Collections
XMLVM_DEFINE_CLASS(java_util_Collections, 6, XMLVM_ITABLE_SIZE_java_util_Collections)

extern JAVA_OBJECT __CLASS_java_util_Collections;
extern JAVA_OBJECT __CLASS_java_util_Collections_1ARRAY;
extern JAVA_OBJECT __CLASS_java_util_Collections_2ARRAY;
extern JAVA_OBJECT __CLASS_java_util_Collections_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_java_util_Collections
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_java_util_Collections \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_java_util_Collections \
    } java_util_Collections

struct java_util_Collections {
    __TIB_DEFINITION_java_util_Collections* tib;
    struct {
        __INSTANCE_FIELDS_java_util_Collections;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_java_util_Collections
#define XMLVM_FORWARD_DECL_java_util_Collections
typedef struct java_util_Collections java_util_Collections;
#endif

#define XMLVM_VTABLE_SIZE_java_util_Collections 6

void __INIT_java_util_Collections();
void __INIT_IMPL_java_util_Collections();
void __DELETE_java_util_Collections(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_java_util_Collections(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_java_util_Collections();
JAVA_OBJECT __NEW_INSTANCE_java_util_Collections();
JAVA_OBJECT java_util_Collections_GET_EMPTY_LIST();
void java_util_Collections_PUT_EMPTY_LIST(JAVA_OBJECT v);
JAVA_OBJECT java_util_Collections_GET_EMPTY_SET();
void java_util_Collections_PUT_EMPTY_SET(JAVA_OBJECT v);
JAVA_OBJECT java_util_Collections_GET_EMPTY_MAP();
void java_util_Collections_PUT_EMPTY_MAP(JAVA_OBJECT v);
void java_util_Collections___CLINIT_();
void java_util_Collections___INIT___(JAVA_OBJECT me);
JAVA_INT java_util_Collections_binarySearch___java_util_List_java_lang_Object(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_INT java_util_Collections_binarySearch___java_util_List_java_lang_Object_java_util_Comparator(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
void java_util_Collections_copy___java_util_List_java_util_List(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_enumeration___java_util_Collection(JAVA_OBJECT n1);
void java_util_Collections_fill___java_util_List_java_lang_Object(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_max___java_util_Collection(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_max___java_util_Collection_java_util_Comparator(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_min___java_util_Collection(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_min___java_util_Collection_java_util_Comparator(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_nCopies___int_java_lang_Object(JAVA_INT n1, JAVA_OBJECT n2);
void java_util_Collections_reverse___java_util_List(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_reverseOrder__();
JAVA_OBJECT java_util_Collections_reverseOrder___java_util_Comparator(JAVA_OBJECT n1);
void java_util_Collections_shuffle___java_util_List(JAVA_OBJECT n1);
void java_util_Collections_shuffle___java_util_List_java_util_Random(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_singleton___java_lang_Object(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_singletonList___java_lang_Object(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_singletonMap___java_lang_Object_java_lang_Object(JAVA_OBJECT n1, JAVA_OBJECT n2);
void java_util_Collections_sort___java_util_List(JAVA_OBJECT n1);
void java_util_Collections_sort___java_util_List_java_util_Comparator(JAVA_OBJECT n1, JAVA_OBJECT n2);
void java_util_Collections_swap___java_util_List_int_int(JAVA_OBJECT n1, JAVA_INT n2, JAVA_INT n3);
JAVA_BOOLEAN java_util_Collections_replaceAll___java_util_List_java_lang_Object_java_lang_Object(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
void java_util_Collections_rotate___java_util_List_int(JAVA_OBJECT n1, JAVA_INT n2);
JAVA_INT java_util_Collections_indexOfSubList___java_util_List_java_util_List(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_INT java_util_Collections_lastIndexOfSubList___java_util_List_java_util_List(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_list___java_util_Enumeration(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_synchronizedCollection___java_util_Collection(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_synchronizedList___java_util_List(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_synchronizedMap___java_util_Map(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_synchronizedSet___java_util_Set(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_synchronizedSortedMap___java_util_SortedMap(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_synchronizedSortedSet___java_util_SortedSet(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_unmodifiableCollection___java_util_Collection(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_unmodifiableList___java_util_List(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_unmodifiableMap___java_util_Map(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_unmodifiableSet___java_util_Set(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_unmodifiableSortedMap___java_util_SortedMap(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_unmodifiableSortedSet___java_util_SortedSet(JAVA_OBJECT n1);
JAVA_INT java_util_Collections_frequency___java_util_Collection_java_lang_Object(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_emptyList__();
JAVA_OBJECT java_util_Collections_emptySet__();
JAVA_OBJECT java_util_Collections_emptyMap__();
JAVA_OBJECT java_util_Collections_checkedCollection___java_util_Collection_java_lang_Class(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_checkedMap___java_util_Map_java_lang_Class_java_lang_Class(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
JAVA_OBJECT java_util_Collections_checkedList___java_util_List_java_lang_Class(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_checkedSet___java_util_Set_java_lang_Class(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_checkedSortedMap___java_util_SortedMap_java_lang_Class_java_lang_Class(JAVA_OBJECT n1, JAVA_OBJECT n2, JAVA_OBJECT n3);
JAVA_OBJECT java_util_Collections_checkedSortedSet___java_util_SortedSet_java_lang_Class(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_BOOLEAN java_util_Collections_addAll___java_util_Collection_java_lang_Object_1ARRAY(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_BOOLEAN java_util_Collections_disjoint___java_util_Collection_java_util_Collection(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_checkType___java_lang_Object_java_lang_Class(JAVA_OBJECT n1, JAVA_OBJECT n2);
JAVA_OBJECT java_util_Collections_newSetFromMap___java_util_Map(JAVA_OBJECT n1);
JAVA_OBJECT java_util_Collections_asLifoQueue___java_util_Deque(JAVA_OBJECT n1);

#endif