/*
    Programmer: Ryan Posey
    Assignment: L12
    Purpose: Practice using pointers
    Due date: 11/4/2025
*/

/**
 * @file studentType.h
 * @brief Declaration of the studentType class which extends personType with
 *        student-specific fields.
 */

#ifndef STUDENT_TYPE_H
#define STUDENT_TYPE_H

#include "personType.h"
#include <string>

/**
 * @class studentType
 * @brief Represents a student with GPA, classification and ID.
 *
 * @invariants
 * - `gpa` is maintained in the range [0.0, 4.0].
 * - `id` and `classification` are valid std::string instances and may hold
 *   sentinel values such as "NOT SET" but are never left indeterminate.
 * - The `personType` invariants apply for the inherited fields.
 */
class studentType : public personType {
public:
    /**
     * @brief Default constructor.
     *
     * @pre  None.
     * @post Constructs a student with `gpa` = 0.0 and string fields set to
     *       "NOT SET".
     * @details
     * Initializes the base `personType` default state and sets student
     * fields to sentinel values.
     * @example
     * @code{.cpp}
     * studentType s;
     * s.print();
     * @endcode
     */
    studentType();

    /**
     * @brief Construct a student with first and last name.
     *
     * @param fName First name.
     * @param lName Last name.
     * @pre  fName and lName are valid std::string.
     * @post Student created with given name and student fields set to
     *       default/sentinel values.
     * @details
     * Useful when only a student's name is known at construction time.
     * @example
     * @code{.cpp}
     * studentType s("John","Doe");
     * @endcode
     */
    studentType(std::string fName, std::string lName);

    /**
     * @brief Shallow copy constructor.
     *
     * Copies the base `personType` fields and the student-specific fields
     * (`gpa`, `classification`, `id`). Parent pointers are copied as-is
     * (shallow copy).
     *
     * @param other Student to copy from.
     */
    studentType(const studentType& other);

    /**
     * @brief Full constructor.
     *
     * @param fName First name.
     * @param lName Last name.
     * @param gpa GPA value (will be clamped to [0.0, 4.0]).
     * @param classification Student classification string.
     * @param id Student ID string.
     * @pre  Strings are valid; gpa is a finite double.
     * @post Fully-initialized student object.
     * @details
     * The constructor forwards name fields to `personType` and sets the
     * student-specific fields. `gpa` will be clamped to the allowed range.
     * @example
     * @code{.cpp}
     * studentType s("Alice","Smith",3.5,"Senior","S123");
     * @endcode
     */
    studentType(std::string fName, std::string lName,
                 double gpa, std::string classification,
                 std::string id);

    /**
     * @brief Set the student's GPA.
     *
     * @param g GPA value; negative values set to 0, values > 4.0 set to 4.0.
     * @pre  g is a finite double.
     * @post getGPA() returns a value in [0.0, 4.0].
     * @example
     * @code{.cpp}
     * s.setGPA(3.75);
     * @endcode
     */
    void setGPA(double);

    /**
     * @brief Set the student ID.
     *
     * @param id New ID string.
     * @pre  id is a valid std::string.
     * @post getID() returns id.
     */
    void setID(std::string);

    /**
     * @brief Set the student's classification.
     *
     * @param classification New classification string.
     * @pre  classification is a valid std::string.
     * @post getClassification() returns classification.
     */
    void setClassification(std::string);

    /**
     * @brief Get the GPA.
     *
     * @return Current GPA in [0.0, 4.0].
     */
    double getGPA() const;

    /**
     * @brief Get the student ID.
     *
     * @return ID string.
     */
    std::string getID() const;

    /**
     * @brief Get the classification string.
     *
     * @return classification string.
     */
    std::string getClassification() const;

    /**
     * @brief Print the student data to stdout (overrides personType::print).
     *
     * @pre  std::cout is available.
     * @post Streams a human-readable representation of the student to stdout.
     * @details
     * This override should call `personType::print()` to emit the common
     * person fields (name, address, DOB, etc.) and then output the
     * student-specific fields such as GPA, classification, and student ID.
     */
    void print() const override;

    /**
     * @brief Compare two studentType objects for equality.
     *
     * @param other Other student to compare.
     * @return true if all fields are equal.
     */
    bool equals(const studentType&) const;

    /**
     * @brief Destructor.
     */
    ~studentType();

private:
    /** \brief Student identifier (may be "NOT SET"). */
    std::string id;

    /** \brief Grade point average in [0.0, 4.0]. */
    double gpa;

    /** \brief Student classification (e.g., "Freshman", "Senior"). */
    std::string classification;
};

#endif // STUDENT_TYPE_H