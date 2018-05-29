using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    //그냥 있는 enum문 사용a
    public AI_STATE m_state = AI_STATE.IDLE;
    float fMoveSpeed = 0.2f;

    // Use this for initialization
    void Start()
    {
        DontDestroyOnLoad(gameObject);

    }

    Coroutine tremble;

    //private void Update()
    //{
    //    if (Input.GetKey(KeyCode.A))
    //        Move(DIRECTION.LEFT);

    //    if (Input.GetKey(KeyCode.D))
    //        Move(DIRECTION.RIGHT);

    //    if (m_state.Equals(AI_STATE.IDLE) && (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.D)))
    //    {
    //        m_state = AI_STATE.MOVE;
    //    }
    //    else if (m_state.Equals(AI_STATE.MOVE) && (Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.D)))
    //    {
    //        m_state = AI_STATE.IDLE;
    //    }
    //}

    void CameBackFromBattleScene()
    {
        for (int i = 0; i < transform.childCount; ++i)
        {
            transform.GetChild(i).gameObject.SetActive(false);
        }
    }

    public void BattleScene()
    {
        for (int i = 0; i < transform.childCount; ++i)
        {
            transform.GetChild(i).gameObject.SetActive(true);
        }
    }

    private void Move(DIRECTION dir)
    {
        if (tremble == null)
            tremble = StartCoroutine(Tremble());

        switch (dir)
        {
            case DIRECTION.LEFT:
                transform.Translate(new Vector3(-1f, 0f) * fMoveSpeed * Time.deltaTime);
                break;

            case DIRECTION.RIGHT:
                transform.Translate(new Vector3(1f, 0f) * fMoveSpeed * Time.deltaTime);
                break;
        }
    }

    IEnumerator Tremble()
    {
        bool bOnGround = true;

        float fJumpPower = 0.25f;
        float fJumpResistance = 0.04f;
        float fCurJumpSpeed = 0f;

        float fOriginYPos = transform.position.y;

        do
        {
            if (bOnGround)
            {
                bOnGround = false;
                fCurJumpSpeed = fJumpPower;
            }

            transform.Translate(new Vector3(0, 1) * fCurJumpSpeed * Time.deltaTime);

            fCurJumpSpeed -= fJumpResistance;

            if (fCurJumpSpeed <= -fJumpPower)
            {
                bOnGround = true;
            }

            yield return null;

        } while (!bOnGround || m_state == AI_STATE.MOVE);

        transform.position = new Vector3(transform.position.x, fOriginYPos);
        tremble = null;
    }
}
