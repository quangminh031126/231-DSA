void Polynomial::insertTerm(const Term &term)
{
    if (term.coeff == 0)
    {
        return;
    }

    SLinkedList<Term>::Iterator it;
    int index = 0;
    for (it = this->terms->begin(); it != this->terms->end(); it++, index++)
    {
        if ((*it).exp < term.exp)
        {
            this->terms->add(index, term);
            return;
        }
        else if ((*it).exp == term.exp)
        {
            (*it).coeff += term.coeff;
            if ((*it).coeff == 0)
            {
                this->terms->removeAt(index);
            }
            return;
        }
    }

    // If we reach here, then the term has the smallest exponent and should be added at the end
    this->terms->add(term);
}

void Polynomial::insertTerm(double coeff, int exp)
{
    insertTerm(Term(coeff, exp));
}
