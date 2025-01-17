/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include "OperatorArithmetic.h"
#include <Include/ScriptCanvas/Libraries/Operators/Math/OperatorDiv.generated.h>

namespace ScriptCanvas
{
    namespace Nodes
    {
        namespace Operators
        {
            //! Node that provides division
            class OperatorDiv : public OperatorArithmetic
            {
            public:

                SCRIPTCANVAS_NODE(OperatorDiv);

                OperatorDiv() = default;
                ~OperatorDiv() = default;

                AZStd::string_view OperatorFunction() const override { return "Divide"; }
                AZStd::unordered_set< Data::Type > GetSupportedNativeDataTypes() const override;

                void Operator(Data::eType type, const ArithmeticOperands& operands, Datum& result) override;

            protected:
                bool IsValidArithmeticSlot(const SlotId& slotId) const override;
            };
        }
    }
}
