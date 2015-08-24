/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/Metric.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  /*
    <p> The output for the <a>ListMetrics</a> action. </p>
  */
  class AWS_CLOUDWATCH_API ListMetricsResult
  {
  public:
    ListMetricsResult();
    ListMetricsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListMetricsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p> A list of metrics used to generate statistics for an AWS account. </p>
    */
    inline const Aws::Vector<Metric>& GetMetrics() const{ return m_metrics; }
    /*
     <p> A list of metrics used to generate statistics for an AWS account. </p>
    */
    inline void SetMetrics(const Aws::Vector<Metric>& value) { m_metrics = value; }

    /*
     <p> A list of metrics used to generate statistics for an AWS account. </p>
    */
    inline ListMetricsResult&  WithMetrics(const Aws::Vector<Metric>& value) { SetMetrics(value); return *this;}

    /*
     <p> A list of metrics used to generate statistics for an AWS account. </p>
    */
    inline ListMetricsResult& AddMetrics(const Metric& value) { m_metrics.push_back(value); return *this; }

    /*
     <p> A string that marks the start of the next batch of returned results. </p>
    */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    /*
     <p> A string that marks the start of the next batch of returned results. </p>
    */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /*
     <p> A string that marks the start of the next batch of returned results. </p>
    */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /*
     <p> A string that marks the start of the next batch of returned results. </p>
    */
    inline ListMetricsResult&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /*
     <p> A string that marks the start of the next batch of returned results. </p>
    */
    inline ListMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline ListMetricsResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Metric> m_metrics;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws