#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
    m_hp = hp;
    m_type = type;
}

Enemy::~Enemy()
{
}

std::string Enemy::getType() const
{
    return (m_type);
}

int Enemy::getHP() const
{
    return (m_hp);
}

void Enemy::takeDamage(int damage)
{
    if (damage > 0)
    {
        m_hp -= damage;
        if (m_hp < 0)
            m_hp = 0;
    }
}