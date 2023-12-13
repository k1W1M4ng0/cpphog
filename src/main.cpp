

#include "hedgehog/protocol/proto/ack.pb.h"
#include "hedgehog/protocol/proto/hedgehog.pb.h"
#include <string>

int main() {
    using std::cout;
    using std::string;

    std::cout << "Hewwo world :3\n";

    using namespace hedgehog::protocol;
    auto a = proto::Acknowledgement();
    *a.mutable_message() = "test";

    a.set_code(proto::AcknowledgementCode::FAILED_COMMAND);


    cout << a.message() << '\n';


    string serialized{};
    a.SerializeToString(&serialized);

    cout << serialized << '\n';

    proto::Acknowledgement ack{};
    ack.ParseFromString(serialized);
    cout << ack.message() << '\n';


    return 0;
}
