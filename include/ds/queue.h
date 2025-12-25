#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * @file queue.h
 * @brief Queue data structure implementation
 * 
 * This file provides a generic queue implementation using a linked list.
 * The queue follows FIFO (First-In-First-Out) principle.
 */

/**
 * @struct QueueNode
 * @brief Node structure for the queue
 */
typedef struct QueueNode {
    void *data;                  /**< Pointer to the data */
    struct QueueNode *next;      /**< Pointer to the next node */
} QueueNode;

/**
 * @struct Queue
 * @brief Queue structure
 */
typedef struct {
    QueueNode *front;            /**< Pointer to the front of the queue */
    QueueNode *rear;             /**< Pointer to the rear of the queue */
    int size;                    /**< Current number of elements in the queue */
} Queue;

/**
 * @brief Creates a new empty queue
 * @return Pointer to the newly created queue, or NULL if memory allocation fails
 */
Queue* queue_create(void);

/**
 * @brief Enqueues (adds) an element to the rear of the queue
 * @param q Pointer to the queue
 * @param data Pointer to the data to be enqueued
 * @return true if successful, false if memory allocation fails
 */
bool queue_enqueue(Queue *q, void *data);

/**
 * @brief Dequeues (removes) an element from the front of the queue
 * @param q Pointer to the queue
 * @return Pointer to the dequeued data, or NULL if queue is empty
 */
void* queue_dequeue(Queue *q);

/**
 * @brief Peeks at the front element without removing it
 * @param q Pointer to the queue
 * @return Pointer to the front data, or NULL if queue is empty
 */
void* queue_peek(Queue *q);

/**
 * @brief Checks if the queue is empty
 * @param q Pointer to the queue
 * @return true if queue is empty, false otherwise
 */
bool queue_is_empty(Queue *q);

/**
 * @brief Gets the size of the queue
 * @param q Pointer to the queue
 * @return Number of elements in the queue
 */
int queue_size(Queue *q);

/**
 * @brief Clears the queue (removes all elements)
 * @param q Pointer to the queue
 * @param free_func Optional function pointer to free the data, or NULL
 */
void queue_clear(Queue *q, void (*free_func)(void*));

/**
 * @brief Destroys the queue and frees all memory
 * @param q Pointer to the queue
 * @param free_func Optional function pointer to free the data, or NULL
 */
void queue_destroy(Queue *q, void (*free_func)(void*));

#endif /* QUEUE_H */
